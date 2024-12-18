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

#include <alibabacloud/selectdb/model/CheckServiceLinkedRoleRequest.h>

using AlibabaCloud::Selectdb::Model::CheckServiceLinkedRoleRequest;

CheckServiceLinkedRoleRequest::CheckServiceLinkedRoleRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "CheckServiceLinkedRole") {
  setMethod(HttpRequest::Method::Post);
}

CheckServiceLinkedRoleRequest::~CheckServiceLinkedRoleRequest() {}

long CheckServiceLinkedRoleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckServiceLinkedRoleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckServiceLinkedRoleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckServiceLinkedRoleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

