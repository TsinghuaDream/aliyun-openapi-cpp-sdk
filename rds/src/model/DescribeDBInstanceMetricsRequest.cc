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

#include <alibabacloud/rds/model/DescribeDBInstanceMetricsRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceMetricsRequest;

DescribeDBInstanceMetricsRequest::DescribeDBInstanceMetricsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceMetrics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceMetricsRequest::~DescribeDBInstanceMetricsRequest()
{}

std::string DescribeDBInstanceMetricsRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DescribeDBInstanceMetricsRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

long DescribeDBInstanceMetricsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceMetricsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceMetricsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceMetricsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeDBInstanceMetricsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceMetricsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstanceMetricsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceMetricsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

