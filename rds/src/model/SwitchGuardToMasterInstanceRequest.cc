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

#include <alibabacloud/rds/model/SwitchGuardToMasterInstanceRequest.h>

using AlibabaCloud::Rds::Model::SwitchGuardToMasterInstanceRequest;

SwitchGuardToMasterInstanceRequest::SwitchGuardToMasterInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "SwitchGuardToMasterInstance") {
  setMethod(HttpRequest::Method::Post);
}

SwitchGuardToMasterInstanceRequest::~SwitchGuardToMasterInstanceRequest() {}

long SwitchGuardToMasterInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SwitchGuardToMasterInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SwitchGuardToMasterInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SwitchGuardToMasterInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SwitchGuardToMasterInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void SwitchGuardToMasterInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string SwitchGuardToMasterInstanceRequest::getRegionId() const {
  return regionId_;
}

void SwitchGuardToMasterInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SwitchGuardToMasterInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void SwitchGuardToMasterInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string SwitchGuardToMasterInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SwitchGuardToMasterInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SwitchGuardToMasterInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SwitchGuardToMasterInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SwitchGuardToMasterInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchGuardToMasterInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

