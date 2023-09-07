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

#include <alibabacloud/iot/model/QueryJobStatisticsRequest.h>

using AlibabaCloud::Iot::Model::QueryJobStatisticsRequest;

QueryJobStatisticsRequest::QueryJobStatisticsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryJobStatistics")
{
	setMethod(HttpRequest::Method::Get);
}

QueryJobStatisticsRequest::~QueryJobStatisticsRequest()
{}

std::string QueryJobStatisticsRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryJobStatisticsRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryJobStatisticsRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryJobStatisticsRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryJobStatisticsRequest::getJobId()const
{
	return jobId_;
}

void QueryJobStatisticsRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string QueryJobStatisticsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryJobStatisticsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryJobStatisticsRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryJobStatisticsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryJobStatisticsRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryJobStatisticsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

