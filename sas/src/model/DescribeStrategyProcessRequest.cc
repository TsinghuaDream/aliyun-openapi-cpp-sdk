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

#include <alibabacloud/sas/model/DescribeStrategyProcessRequest.h>

using AlibabaCloud::Sas::Model::DescribeStrategyProcessRequest;

DescribeStrategyProcessRequest::DescribeStrategyProcessRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeStrategyProcess")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStrategyProcessRequest::~DescribeStrategyProcessRequest()
{}

std::string DescribeStrategyProcessRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeStrategyProcessRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeStrategyProcessRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeStrategyProcessRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setParameter("StrategyId", std::to_string(strategyId));
}

