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

#include <alibabacloud/nas/model/ListRecycleBinJobsRequest.h>

using AlibabaCloud::NAS::Model::ListRecycleBinJobsRequest;

ListRecycleBinJobsRequest::ListRecycleBinJobsRequest() :
	RpcServiceRequest("nas", "2017-06-26", "ListRecycleBinJobs")
{
	setMethod(HttpRequest::Method::Get);
}

ListRecycleBinJobsRequest::~ListRecycleBinJobsRequest()
{}

long ListRecycleBinJobsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListRecycleBinJobsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListRecycleBinJobsRequest::getJobId()const
{
	return jobId_;
}

void ListRecycleBinJobsRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

long ListRecycleBinJobsRequest::getPageSize()const
{
	return pageSize_;
}

void ListRecycleBinJobsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListRecycleBinJobsRequest::getFileSystemId()const
{
	return fileSystemId_;
}

void ListRecycleBinJobsRequest::setFileSystemId(const std::string& fileSystemId)
{
	fileSystemId_ = fileSystemId;
	setParameter("FileSystemId", fileSystemId);
}

std::string ListRecycleBinJobsRequest::getStatus()const
{
	return status_;
}

void ListRecycleBinJobsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

