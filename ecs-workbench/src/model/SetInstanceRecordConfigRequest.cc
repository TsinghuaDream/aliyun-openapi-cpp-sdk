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

#include <alibabacloud/ecs-workbench/model/SetInstanceRecordConfigRequest.h>

using AlibabaCloud::Ecs_workbench::Model::SetInstanceRecordConfigRequest;

SetInstanceRecordConfigRequest::SetInstanceRecordConfigRequest()
    : RpcServiceRequest("ecs-workbench", "2022-02-20", "SetInstanceRecordConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetInstanceRecordConfigRequest::~SetInstanceRecordConfigRequest() {}

bool SetInstanceRecordConfigRequest::getEnabled() const {
  return enabled_;
}

void SetInstanceRecordConfigRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setBodyParameter(std::string("Enabled"), enabled ? "true" : "false");
}

std::string SetInstanceRecordConfigRequest::getRecordStorageTarget() const {
  return recordStorageTarget_;
}

void SetInstanceRecordConfigRequest::setRecordStorageTarget(const std::string &recordStorageTarget) {
  recordStorageTarget_ = recordStorageTarget;
  setBodyParameter(std::string("RecordStorageTarget"), recordStorageTarget);
}

std::string SetInstanceRecordConfigRequest::getInstanceId() const {
  return instanceId_;
}

void SetInstanceRecordConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string SetInstanceRecordConfigRequest::getRegionId() const {
  return regionId_;
}

void SetInstanceRecordConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int SetInstanceRecordConfigRequest::getExpirationDays() const {
  return expirationDays_;
}

void SetInstanceRecordConfigRequest::setExpirationDays(int expirationDays) {
  expirationDays_ = expirationDays;
  setBodyParameter(std::string("ExpirationDays"), std::to_string(expirationDays));
}

