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

#include <alibabacloud/nas/model/ListRecentlyRecycledDirectoriesRequest.h>

using AlibabaCloud::NAS::Model::ListRecentlyRecycledDirectoriesRequest;

ListRecentlyRecycledDirectoriesRequest::ListRecentlyRecycledDirectoriesRequest() :
	RpcServiceRequest("nas", "2017-06-26", "ListRecentlyRecycledDirectories")
{
	setMethod(HttpRequest::Method::Get);
}

ListRecentlyRecycledDirectoriesRequest::~ListRecentlyRecycledDirectoriesRequest()
{}

std::string ListRecentlyRecycledDirectoriesRequest::getNextToken()const
{
	return nextToken_;
}

void ListRecentlyRecycledDirectoriesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListRecentlyRecycledDirectoriesRequest::getFileSystemId()const
{
	return fileSystemId_;
}

void ListRecentlyRecycledDirectoriesRequest::setFileSystemId(const std::string& fileSystemId)
{
	fileSystemId_ = fileSystemId;
	setParameter("FileSystemId", fileSystemId);
}

long ListRecentlyRecycledDirectoriesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListRecentlyRecycledDirectoriesRequest::setMaxResults(long maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

