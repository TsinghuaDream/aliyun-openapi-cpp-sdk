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

#include <alibabacloud/ens/model/ModifyHaVipAttributeRequest.h>

using AlibabaCloud::Ens::Model::ModifyHaVipAttributeRequest;

ModifyHaVipAttributeRequest::ModifyHaVipAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyHaVipAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyHaVipAttributeRequest::~ModifyHaVipAttributeRequest() {}

std::string ModifyHaVipAttributeRequest::getHaVipId() const {
  return haVipId_;
}

void ModifyHaVipAttributeRequest::setHaVipId(const std::string &haVipId) {
  haVipId_ = haVipId;
  setParameter(std::string("HaVipId"), haVipId);
}

std::string ModifyHaVipAttributeRequest::getName() const {
  return name_;
}

void ModifyHaVipAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

