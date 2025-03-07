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

#include <alibabacloud/ddoscoo/model/DescribeSlsLogstoreInfoRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeSlsLogstoreInfoRequest;

DescribeSlsLogstoreInfoRequest::DescribeSlsLogstoreInfoRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeSlsLogstoreInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSlsLogstoreInfoRequest::~DescribeSlsLogstoreInfoRequest()
{}

std::string DescribeSlsLogstoreInfoRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeSlsLogstoreInfoRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeSlsLogstoreInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSlsLogstoreInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeSlsLogstoreInfoRequest::getLang()const
{
	return lang_;
}

void DescribeSlsLogstoreInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

