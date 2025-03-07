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

#include <alibabacloud/rds/model/DescribeAvailableMetricsRequest.h>

using AlibabaCloud::Rds::Model::DescribeAvailableMetricsRequest;

DescribeAvailableMetricsRequest::DescribeAvailableMetricsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeAvailableMetrics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAvailableMetricsRequest::~DescribeAvailableMetricsRequest()
{}

std::string DescribeAvailableMetricsRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DescribeAvailableMetricsRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

long DescribeAvailableMetricsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableMetricsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAvailableMetricsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableMetricsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeAvailableMetricsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableMetricsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAvailableMetricsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableMetricsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

