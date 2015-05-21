#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cutils/properties.h>
#include <cutils/log.h>

#define LOG_TAG "setdpi"

int main(int argc, char *argv[]) {
    if (argc != 2) 
        return -1;

    ALOGE("Setting DPI to %s", argv[1]);

    int ret1, ret2;
    ret1 = property_set("ro.sf.lcd_density", argv[1]);
    ret2 = property_set("qemu.sf.lcd_density", argv[1]);
    return ret1 || ret2;
}
