/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/push/model/UnbindPhoneRequest.h>

using AlibabaCloud::Push::Model::UnbindPhoneRequest;

UnbindPhoneRequest::UnbindPhoneRequest()
    : RpcServiceRequest("push", "2016-08-01", "UnbindPhone") {
  setMethod(HttpRequest::Method::Post);
}

UnbindPhoneRequest::~UnbindPhoneRequest() {}

std::string UnbindPhoneRequest::getDeviceId() const {
  return deviceId_;
}

void UnbindPhoneRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string UnbindPhoneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UnbindPhoneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long UnbindPhoneRequest::getAppKey() const {
  return appKey_;
}

void UnbindPhoneRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

