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

#include <alibabacloud/ddoscoo/model/EnableLayer7CCRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::EnableLayer7CCRuleRequest;

EnableLayer7CCRuleRequest::EnableLayer7CCRuleRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "EnableLayer7CCRule")
{
	setMethod(HttpRequest::Method::Post);
}

EnableLayer7CCRuleRequest::~EnableLayer7CCRuleRequest()
{}

std::string EnableLayer7CCRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void EnableLayer7CCRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string EnableLayer7CCRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void EnableLayer7CCRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string EnableLayer7CCRuleRequest::getDomain()const
{
	return domain_;
}

void EnableLayer7CCRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

