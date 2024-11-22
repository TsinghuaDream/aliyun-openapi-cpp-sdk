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

#ifndef ALIBABACLOUD_QIANZHOU_MODEL_AICREATESESSIONMESSAGERESULT_H_
#define ALIBABACLOUD_QIANZHOU_MODEL_AICREATESESSIONMESSAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qianzhou/QianzhouExport.h>

namespace AlibabaCloud
{
	namespace Qianzhou
	{
		namespace Model
		{
			class ALIBABACLOUD_QIANZHOU_EXPORT AICreateSessionMessageResult : public ServiceResult
			{
			public:


				AICreateSessionMessageResult();
				explicit AICreateSessionMessageResult(const std::string &payload);
				~AICreateSessionMessageResult();
				std::string getMsg()const;
				std::string getAnswer()const;
				std::string getRequestId()const;
				std::string getData()const;
				std::string getSession_id()const;
				long getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string answer_;
				std::string requestId_;
				std::string data_;
				std::string session_id_;
				long code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QIANZHOU_MODEL_AICREATESESSIONMESSAGERESULT_H_