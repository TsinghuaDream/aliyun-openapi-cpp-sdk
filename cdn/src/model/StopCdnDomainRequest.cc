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

#include <alibabacloud/cdn/model/StopCdnDomainRequest.h>

using AlibabaCloud::Cdn::Model::StopCdnDomainRequest;

StopCdnDomainRequest::StopCdnDomainRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "StopCdnDomain")
{
	setMethod(HttpRequest::Method::Post);
}

StopCdnDomainRequest::~StopCdnDomainRequest()
{}

std::string StopCdnDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void StopCdnDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StopCdnDomainRequest::getDomainName()const
{
	return domainName_;
}

void StopCdnDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long StopCdnDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void StopCdnDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

