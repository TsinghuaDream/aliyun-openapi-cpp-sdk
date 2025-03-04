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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBESLOWLOGRECORDSREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBESLOWLOGRECORDSREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT DescribeSlowLogRecordsRequest : public RpcServiceRequest {
public:
	DescribeSlowLogRecordsRequest();
	~DescribeSlowLogRecordsRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	long getSQLId() const;
	void setSQLId(long sQLId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);

private:
	std::string startTime_;
	int pageNumber_;
	std::string accessKeyId_;
	int pageSize_;
	std::string dBInstanceId_;
	long sQLId_;
	std::string endTime_;
	std::string dBName_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBESLOWLOGRECORDSREQUEST_H_
