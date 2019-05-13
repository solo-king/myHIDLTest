LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
#将编译出来的文件放置到/vendor分区中
LOCAL_VENDOR_MODULE := true
LOCAL_MODULE := lightTest

LOCAL_SRC_FILES := \
    lightTest.cpp

LOCAL_SHARED_LIBRARIES := \
    libhidlbase \
    libhidltransport \
    libutils \
    liblog \
    libcutils \
    libhardware \
    libbase \
    libcutils \
    android.hardware.light@2.0

include $(BUILD_EXECUTABLE)