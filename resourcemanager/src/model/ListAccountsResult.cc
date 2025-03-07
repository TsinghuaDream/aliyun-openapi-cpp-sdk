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

#include <alibabacloud/resourcemanager/model/ListAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListAccountsResult::ListAccountsResult() :
	ServiceResult()
{}

ListAccountsResult::ListAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccountsResult::~ListAccountsResult()
{}

void ListAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountsNode = value["Accounts"]["Account"];
	for (auto valueAccountsAccount : allAccountsNode)
	{
		Account accountsObject;
		if(!valueAccountsAccount["Status"].isNull())
			accountsObject.status = valueAccountsAccount["Status"].asString();
		if(!valueAccountsAccount["Type"].isNull())
			accountsObject.type = valueAccountsAccount["Type"].asString();
		if(!valueAccountsAccount["DisplayName"].isNull())
			accountsObject.displayName = valueAccountsAccount["DisplayName"].asString();
		if(!valueAccountsAccount["FolderId"].isNull())
			accountsObject.folderId = valueAccountsAccount["FolderId"].asString();
		if(!valueAccountsAccount["ResourceDirectoryId"].isNull())
			accountsObject.resourceDirectoryId = valueAccountsAccount["ResourceDirectoryId"].asString();
		if(!valueAccountsAccount["JoinTime"].isNull())
			accountsObject.joinTime = valueAccountsAccount["JoinTime"].asString();
		if(!valueAccountsAccount["AccountId"].isNull())
			accountsObject.accountId = valueAccountsAccount["AccountId"].asString();
		if(!valueAccountsAccount["JoinMethod"].isNull())
			accountsObject.joinMethod = valueAccountsAccount["JoinMethod"].asString();
		if(!valueAccountsAccount["ModifyTime"].isNull())
			accountsObject.modifyTime = valueAccountsAccount["ModifyTime"].asString();
		if(!valueAccountsAccount["ResourceDirectoryPath"].isNull())
			accountsObject.resourceDirectoryPath = valueAccountsAccount["ResourceDirectoryPath"].asString();
		accounts_.push_back(accountsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListAccountsResult::getTotalCount()const
{
	return totalCount_;
}

int ListAccountsResult::getPageSize()const
{
	return pageSize_;
}

int ListAccountsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAccountsResult::Account> ListAccountsResult::getAccounts()const
{
	return accounts_;
}

