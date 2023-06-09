/*
 * Copyright (c) 2021-2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef BATTERY_MODULE_H
#define BATTERY_MODULE_H

#include "jsi.h"

namespace OHOS {
namespace ACELite {
using namespace OHOS::ACELite;
class BatteryModule {
public:
    BatteryModule() {}
    ~BatteryModule() {}
    static JSIValue GetStatus(const JSIValue thisVal, const JSIValue* args, uint8_t argsNum);
};

void InitBatteryModule(JSIValue exports);
} // namespace ACELite
} // namespace OHOS

#endif  // BATTERY_MODULE_H