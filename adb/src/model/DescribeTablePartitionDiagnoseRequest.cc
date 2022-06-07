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

#include <alibabacloud/adb/model/DescribeTablePartitionDiagnoseRequest.h>

using AlibabaCloud::Adb::Model::DescribeTablePartitionDiagnoseRequest;

DescribeTablePartitionDiagnoseRequest::DescribeTablePartitionDiagnoseRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeTablePartitionDiagnose") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTablePartitionDiagnoseRequest::~DescribeTablePartitionDiagnoseRequest() {}

long DescribeTablePartitionDiagnoseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTablePartitionDiagnoseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeTablePartitionDiagnoseRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTablePartitionDiagnoseRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTablePartitionDiagnoseRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTablePartitionDiagnoseRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTablePartitionDiagnoseRequest::getRegionId() const {
  return regionId_;
}

void DescribeTablePartitionDiagnoseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeTablePartitionDiagnoseRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTablePartitionDiagnoseRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTablePartitionDiagnoseRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTablePartitionDiagnoseRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTablePartitionDiagnoseRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeTablePartitionDiagnoseRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeTablePartitionDiagnoseRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTablePartitionDiagnoseRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTablePartitionDiagnoseRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTablePartitionDiagnoseRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

