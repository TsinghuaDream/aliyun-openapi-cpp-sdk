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

#include <alibabacloud/tag/model/OpenCreatedByRequest.h>

using AlibabaCloud::Tag::Model::OpenCreatedByRequest;

OpenCreatedByRequest::OpenCreatedByRequest()
    : RpcServiceRequest("tag", "2018-08-28", "OpenCreatedBy") {
  setMethod(HttpRequest::Method::Post);
}

OpenCreatedByRequest::~OpenCreatedByRequest() {}

std::string OpenCreatedByRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void OpenCreatedByRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string OpenCreatedByRequest::getRegionId() const {
  return regionId_;
}

void OpenCreatedByRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string OpenCreatedByRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void OpenCreatedByRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string OpenCreatedByRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void OpenCreatedByRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long OpenCreatedByRequest::getOwnerId() const {
  return ownerId_;
}

void OpenCreatedByRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

