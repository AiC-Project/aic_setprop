#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cutils/properties.h>

#define LOG_TAG "aicVM_setprop"
#include <cutils/log.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        ALOGE("%s key value", argv[0]);
        return -1;
    }

    if (strncmp(argv[1], "aicVM", 7) != 0 &&
        strncmp(argv[1], "aicd.", 6) != 0) {
        ALOGE("Trying to set non-aicVM prop : %s", argv[1]);
        return -1;
    }

    //ALOGE("Setting %s to %s", argv[1], argv[2]);

    return property_set(argv[1], argv[2]);
}
