/* -*- Mode: C; indent-tabs-mode:t ; c-basic-offset:4 -*- */
/*
 * Copyright © 2019 Pino Toscano <toscano.pino@tiscali.it>
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include "libusbi.h"
#include <stdio.h>

static int
redox_get_device_list(struct libusb_context* ctx,
    struct discovered_devs** discdevs)
{
    printf("redox_get_device_list\n");
    return LIBUSB_SUCCESS;
}

static int
redox_open(struct libusb_device_handle* handle)
{
    printf("redox_open\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static void
redox_close(struct libusb_device_handle* handle)
{
    printf("redox_close\n");
}

static int
redox_get_active_config_descriptor(struct libusb_device* dev,
    void* buf, size_t len)
{
    printf("redox_get_active_config_descriptor\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static int
redox_get_config_descriptor(struct libusb_device* dev, uint8_t idx,
    void* buf, size_t len)
{
    printf("redox_get_config_descriptor\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static int
redox_set_configuration(struct libusb_device_handle* handle, int config)
{
    printf("redox_set_configuration\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static int
redox_claim_interface(struct libusb_device_handle* handle, uint8_t iface)
{
    printf("redox_claim_interface\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static int
redox_release_interface(struct libusb_device_handle* handle, uint8_t iface)
{
    printf("redox_release_interface\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static int
redox_set_interface_altsetting(struct libusb_device_handle* handle, uint8_t iface,
    uint8_t altsetting)
{
    printf("redox_set_interface_altsetting\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static int
redox_clear_halt(struct libusb_device_handle* handle, unsigned char endpoint)
{
    printf("redox_clear_halt\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static int
redox_submit_transfer(struct usbi_transfer* itransfer) REQUIRES(itransfer->lock)
{
    printf("redox_submit_transfer\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

static int
redox_cancel_transfer(struct usbi_transfer* itransfer)
{
    printf("redox_cancel_transfer\n");
    return LIBUSB_ERROR_NOT_SUPPORTED;
}

const struct usbi_os_backend usbi_backend = {
    .name = "Redox backend",
    .caps = 0,
    .get_device_list = redox_get_device_list,
    .open = redox_open,
    .close = redox_close,
    .get_active_config_descriptor = redox_get_active_config_descriptor,
    .get_config_descriptor = redox_get_config_descriptor,
    .set_configuration = redox_set_configuration,
    .claim_interface = redox_claim_interface,
    .release_interface = redox_release_interface,
    .set_interface_altsetting = redox_set_interface_altsetting,
    .clear_halt = redox_clear_halt,
    .submit_transfer = redox_submit_transfer,
    .cancel_transfer = redox_cancel_transfer,
};
