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

#include <alibabacloud/dataworks-public/model/ListDagsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDagsRequest;

ListDagsRequest::ListDagsRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListDags")
{
	setMethod(HttpRequest::Method::Post);
}

ListDagsRequest::~ListDagsRequest()
{}

std::string ListDagsRequest::getProjectEnv()const
{
	return projectEnv_;
}

void ListDagsRequest::setProjectEnv(const std::string& projectEnv)
{
	projectEnv_ = projectEnv;
	setBodyParameter("ProjectEnv", projectEnv);
}

long ListDagsRequest::getOpSeq()const
{
	return opSeq_;
}

void ListDagsRequest::setOpSeq(long opSeq)
{
	opSeq_ = opSeq;
	setBodyParameter("OpSeq", std::to_string(opSeq));
}

