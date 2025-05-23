/*-----------------------------------------------------------------------*/
/* Low level disk I/O module skeleton for FatFs     (C)ChaN, 2016        */
/* ESP-IDF port Copyright 2016-2025 Espressif Systems (Shanghai) PTE LTD */
/*-----------------------------------------------------------------------*/
/* If a working storage control module is available, it should be        */
/* attached to the FatFs via a glue function rather than modifying it.   */
/* This is an example of glue functions to attach various existing       */
/* storage control modules to the FatFs module with a defined API.       */
/*-----------------------------------------------------------------------*/

#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>
#include "diskio_impl.h"
#include "ffconf.h"
#include "ff.h"

static ff_diskio_impl_t * s_impls[FF_VOLUMES] = { NULL };

#if FF_MULTI_PARTITION		/* Multiple partition configuration */
PARTITION VolToPart[FF_VOLUMES] = {
    {0, 0},    /* Logical drive 0 ==> Physical drive 0, auto detection */
#if FF_VOLUMES > 1
    {1, 0},    /* Logical drive 1 ==> Physical drive 1, auto detection */
#endif
#if FF_VOLUMES > 2
    {2, 0},     /* Logical drive 2 ==> Physical drive 2, auto detection */
#endif
#if FF_VOLUMES > 3
    {3, 0},     /* Logical drive 3 ==> Physical drive 3, auto detection */
#endif
#if FF_VOLUMES > 4
    {4, 0},     /* Logical drive 4 ==> Physical drive 4, auto detection */
#endif
#if FF_VOLUMES > 5
    {5, 0},     /* Logical drive 5 ==> Physical drive 5, auto detection */
#endif
#if FF_VOLUMES > 6
    {6, 0},     /* Logical drive 6 ==> Physical drive 6, auto detection */
#endif
#if FF_VOLUMES > 7
    {7, 0},     /* Logical drive 7 ==> Physical drive 7, auto detection */
#endif
#if FF_VOLUMES > 8
    {8, 0},     /* Logical drive 8 ==> Physical drive 8, auto detection */
#endif
#if FF_VOLUMES > 9
    {9, 0},     /* Logical drive 9 ==> Physical drive 9, auto detection */
#endif
};
#endif

esp_err_t ff_diskio_get_drive(BYTE* out_pdrv)
{
    BYTE i;
    for(i=0; i<FF_VOLUMES; i++) {
        if (!s_impls[i]) {
            *out_pdrv = i;
            return ESP_OK;
        }
    }
    return ESP_ERR_NOT_FOUND;
}

void ff_diskio_register(BYTE pdrv, const ff_diskio_impl_t* discio_impl)
{
    assert(pdrv < FF_VOLUMES);

    if (s_impls[pdrv]) {
        ff_diskio_impl_t* im = s_impls[pdrv];
        s_impls[pdrv] = NULL;
        free(im);
    }

    if (!discio_impl) {
        return;
    }

    ff_diskio_impl_t * impl = (ff_diskio_impl_t *)malloc(sizeof(ff_diskio_impl_t));
    assert(impl != NULL);
    memcpy(impl, discio_impl, sizeof(ff_diskio_impl_t));
    s_impls[pdrv] = impl;
}

DSTATUS ff_disk_initialize (BYTE pdrv)
{
    return s_impls[pdrv]->init(pdrv);
}
DSTATUS ff_disk_status (BYTE pdrv)
{
    return s_impls[pdrv]->status(pdrv);
}
DRESULT ff_disk_read (BYTE pdrv, BYTE* buff, LBA_t sector, UINT count)
{
    return s_impls[pdrv]->read(pdrv, buff, sector, count);
}
DRESULT ff_disk_write (BYTE pdrv, const BYTE* buff, LBA_t sector, UINT count)
{
    return s_impls[pdrv]->write(pdrv, buff, sector, count);
}
DRESULT ff_disk_ioctl (BYTE pdrv, BYTE cmd, void* buff)
{
    return s_impls[pdrv]->ioctl(pdrv, cmd, buff);
}

DWORD get_fattime(void)
{
    time_t t = time(NULL);
    struct tm tmr;
    localtime_r(&t, &tmr);
    int year = tmr.tm_year < 80 ? 0 : tmr.tm_year - 80;
    return    ((DWORD)(year) << 25)
            | ((DWORD)(tmr.tm_mon + 1) << 21)
            | ((DWORD)tmr.tm_mday << 16)
            | (WORD)(tmr.tm_hour << 11)
            | (WORD)(tmr.tm_min << 5)
            | (WORD)(tmr.tm_sec >> 1);
}
