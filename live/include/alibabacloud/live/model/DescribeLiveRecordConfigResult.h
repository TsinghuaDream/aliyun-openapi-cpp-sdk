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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVERECORDCONFIGRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVERECORDCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveRecordConfigResult : public ServiceResult
			{
			public:
				struct LiveAppRecord
				{
					struct RecordFormat
					{
						std::string format;
						std::string sliceOssObjectPrefix;
						int cycleDuration;
						int sliceDuration;
						std::string ossObjectPrefix;
					};
					struct RecordFormat
					{
						std::string format;
						std::string sliceOssObjectPrefix;
						int cycleDuration;
						int sliceDuration;
						std::string ossObjectPrefix;
					};
					std::string streamName;
					std::string endTime;
					std::string ossEndpoint;
					std::string domainName;
					std::string createTime;
					std::vector<std::string> transcodeTemplates;
					std::string startTime;
					std::string ossBucket;
					std::vector<LiveAppRecord::RecordFormat> recordFormatList;
					std::vector<LiveAppRecord::RecordFormat> transcodeRecordFormatList;
					int onDemond;
					std::string appName;
				};


				DescribeLiveRecordConfigResult();
				explicit DescribeLiveRecordConfigResult(const std::string &payload);
				~DescribeLiveRecordConfigResult();
				std::string getOrder()const;
				int getTotalNum()const;
				int getPageNum()const;
				int getTotalPage()const;
				int getPageSize()const;
				std::vector<LiveAppRecord> getLiveAppRecordList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string order_;
				int totalNum_;
				int pageNum_;
				int totalPage_;
				int pageSize_;
				std::vector<LiveAppRecord> liveAppRecordList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVERECORDCONFIGRESULT_H_