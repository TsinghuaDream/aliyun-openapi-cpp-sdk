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

#include <alibabacloud/rds/model/DescribeModifyParameterLogRequest.h>

using AlibabaCloud::Rds::Model::DescribeModifyParameterLogRequest;

DescribeModifyParameterLogRequest::DescribeModifyParameterLogRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeModifyParameterLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeModifyParameterLogRequest::~DescribeModifyParameterLogRequest() {}

long DescribeModifyParameterLogRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeModifyParameterLogRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeModifyParameterLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeModifyParameterLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeModifyParameterLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeModifyParameterLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeModifyParameterLogRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeModifyParameterLogRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeModifyParameterLogRequest::getRegionId() const {
  return regionId_;
}

void DescribeModifyParameterLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeModifyParameterLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeModifyParameterLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeModifyParameterLogRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeModifyParameterLogRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeModifyParameterLogRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeModifyParameterLogRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeModifyParameterLogRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeModifyParameterLogRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeModifyParameterLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeModifyParameterLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeModifyParameterLogRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeModifyParameterLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

