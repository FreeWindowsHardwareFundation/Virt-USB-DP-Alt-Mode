#ifndef USB_DP_ALT_MODE_H
#define USB_DP_ALT_MODE_H

#include "hw/usb.h"

#define TYPE_USB_DP_ALT_MODE "usb-dp-alt-mode"
#define USB_DP_ALT_MODE(obj) \
    OBJECT_CHECK(USBDPAltModeState, (obj), TYPE_USB_DP_ALT_MODE)

typedef struct USBDPAltModeState USBDPAltModeState;

void usb_dp_alt_mode_negotiate(USBDPAltModeState *s);
void usb_dp_alt_mode_handle_control(USBDevice *dev, USBPacket *p, int request, uint8_t *data, int len, int64_t *retval);
void usb_dp_alt_mode_attach(USBDPAltModeState *s);

#endif /* USB_DP_ALT_MODE_H */
