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

#include <alibabacloud/sas/model/DescribeRiskCheckItemResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeRiskCheckItemResultResult::DescribeRiskCheckItemResultResult() :
	ServiceResult()
{}

DescribeRiskCheckItemResultResult::DescribeRiskCheckItemResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskCheckItemResultResult::~DescribeRiskCheckItemResultResult()
{}

void DescribeRiskCheckItemResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageContentResourceNode = value["PageContentResource"];
	if(!pageContentResourceNode["CurrentPage"].isNull())
		pageContentResource_.currentPage = std::stoi(pageContentResourceNode["CurrentPage"].asString());
	if(!pageContentResourceNode["ContentResource"].isNull())
		pageContentResource_.contentResource = pageContentResourceNode["ContentResource"].asString();
	if(!pageContentResourceNode["PageSize"].isNull())
		pageContentResource_.pageSize = std::stoi(pageContentResourceNode["PageSize"].asString());
	if(!pageContentResourceNode["TotalCount"].isNull())
		pageContentResource_.totalCount = std::stoi(pageContentResourceNode["TotalCount"].asString());
	if(!pageContentResourceNode["PageCount"].isNull())
		pageContentResource_.pageCount = std::stoi(pageContentResourceNode["PageCount"].asString());
	if(!pageContentResourceNode["Count"].isNull())
		pageContentResource_.count = std::stoi(pageContentResourceNode["Count"].asString());

}

DescribeRiskCheckItemResultResult::PageContentResource DescribeRiskCheckItemResultResult::getPageContentResource()const
{
	return pageContentResource_;
}

