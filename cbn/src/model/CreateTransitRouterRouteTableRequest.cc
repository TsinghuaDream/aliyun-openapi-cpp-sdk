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

#include <alibabacloud/cbn/model/CreateTransitRouterRouteTableRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterRouteTableRequest;

CreateTransitRouterRouteTableRequest::CreateTransitRouterRouteTableRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterRouteTable") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterRouteTableRequest::~CreateTransitRouterRouteTableRequest() {}

long CreateTransitRouterRouteTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterRouteTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterRouteTableRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterRouteTableRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterRouteTableRequest::getTransitRouterRouteTableDescription() const {
  return transitRouterRouteTableDescription_;
}

void CreateTransitRouterRouteTableRequest::setTransitRouterRouteTableDescription(const std::string &transitRouterRouteTableDescription) {
  transitRouterRouteTableDescription_ = transitRouterRouteTableDescription;
  setParameter(std::string("TransitRouterRouteTableDescription"), transitRouterRouteTableDescription);
}

bool CreateTransitRouterRouteTableRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterRouteTableRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterRouteTableRequest::getTransitRouterRouteTableName() const {
  return transitRouterRouteTableName_;
}

void CreateTransitRouterRouteTableRequest::setTransitRouterRouteTableName(const std::string &transitRouterRouteTableName) {
  transitRouterRouteTableName_ = transitRouterRouteTableName;
  setParameter(std::string("TransitRouterRouteTableName"), transitRouterRouteTableName);
}

std::string CreateTransitRouterRouteTableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterRouteTableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouterRouteTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterRouteTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterRouteTableRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterRouteTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterRouteTableRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void CreateTransitRouterRouteTableRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

