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

#include <alibabacloud/ens/model/ModifyInstanceBootConfigurationRequest.h>

using AlibabaCloud::Ens::Model::ModifyInstanceBootConfigurationRequest;

ModifyInstanceBootConfigurationRequest::ModifyInstanceBootConfigurationRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyInstanceBootConfiguration") {
  setMethod(HttpRequest::Method::Get);
}

ModifyInstanceBootConfigurationRequest::~ModifyInstanceBootConfigurationRequest() {}

std::string ModifyInstanceBootConfigurationRequest::getDiskSet() const {
  return diskSet_;
}

void ModifyInstanceBootConfigurationRequest::setDiskSet(const std::string &diskSet) {
  diskSet_ = diskSet;
  setParameter(std::string("DiskSet"), diskSet);
}

std::string ModifyInstanceBootConfigurationRequest::getBootType() const {
  return bootType_;
}

void ModifyInstanceBootConfigurationRequest::setBootType(const std::string &bootType) {
  bootType_ = bootType;
  setParameter(std::string("BootType"), bootType);
}

std::string ModifyInstanceBootConfigurationRequest::getBootSet() const {
  return bootSet_;
}

void ModifyInstanceBootConfigurationRequest::setBootSet(const std::string &bootSet) {
  bootSet_ = bootSet;
  setParameter(std::string("BootSet"), bootSet);
}

std::string ModifyInstanceBootConfigurationRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceBootConfigurationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

