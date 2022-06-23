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

#include <alibabacloud/cbn/model/DisableCenVpcFlowStatisticRequest.h>

using AlibabaCloud::Cbn::Model::DisableCenVpcFlowStatisticRequest;

DisableCenVpcFlowStatisticRequest::DisableCenVpcFlowStatisticRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DisableCenVpcFlowStatistic") {
  setMethod(HttpRequest::Method::Post);
}

DisableCenVpcFlowStatisticRequest::~DisableCenVpcFlowStatisticRequest() {}

long DisableCenVpcFlowStatisticRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableCenVpcFlowStatisticRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableCenVpcFlowStatisticRequest::getClientToken() const {
  return clientToken_;
}

void DisableCenVpcFlowStatisticRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DisableCenVpcFlowStatisticRequest::getCenId() const {
  return cenId_;
}

void DisableCenVpcFlowStatisticRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string DisableCenVpcFlowStatisticRequest::getRegionId() const {
  return regionId_;
}

void DisableCenVpcFlowStatisticRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DisableCenVpcFlowStatisticRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DisableCenVpcFlowStatisticRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DisableCenVpcFlowStatisticRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DisableCenVpcFlowStatisticRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DisableCenVpcFlowStatisticRequest::getOwnerId() const {
  return ownerId_;
}

void DisableCenVpcFlowStatisticRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

