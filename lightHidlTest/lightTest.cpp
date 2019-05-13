#define LOG_TAG "MyLight"

#include <android/hardware/light/2.0/ILight.h>
#include <log/log.h>

/*
描述:
    测试项目所在目录:
        hardware/rockchip/lightTest
    测试logcat使用:
        logcat 'Lights Hal':V MyLight:V light:V  *:S&
    依赖的文件:
        /hardware/interfaces/light/2.0/
    依赖的库
        /vendor/lib64/hw/android.hardware.light@2.0-impl.so
        //暂时没有用上
        /vendor/lib64/hw/lights.rk3399.so 
*/
using ::android::hardware::light::V2_0::ILight;
using ::android::hardware::light::V2_0::LightState;
//using ::android::hardware::light::V2_0::Status;
using ::android::hardware::light::V2_0::Type;
using ::android::sp;

int main() {

    ALOGD("start testing...");
    
    sp<ILight> myLight = ILight::getService();
  
    LightState state = {
        .color      = 255
    };

    myLight->setLight(Type::BACKLIGHT, state);

    return 0;
}
