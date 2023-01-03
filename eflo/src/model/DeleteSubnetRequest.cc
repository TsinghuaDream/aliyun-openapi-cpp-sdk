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

#include <alibabacloud/eflo/model/DeleteSubnetRequest.h>

using AlibabaCloud::Eflo::Model::DeleteSubnetRequest;

DeleteSubnetRequest::DeleteSubnetRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "DeleteSubnet") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSubnetRequest::~DeleteSubnetRequest() {}

std::string DeleteSubnetRequest::getSubnetId() const {
  return subnetId_;
}

void DeleteSubnetRequest::setSubnetId(const std::string &subnetId) {
  subnetId_ = subnetId;
  setBodyParameter(std::string("SubnetId"), subnetId);
}

std::string DeleteSubnetRequest::getRegionId() const {
  return regionId_;
}

void DeleteSubnetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DeleteSubnetRequest::getVpdId() const {
  return vpdId_;
}

void DeleteSubnetRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

std::string DeleteSubnetRequest::getZoneId() const {
  return zoneId_;
}

void DeleteSubnetRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

