/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/sdb/model/ListDomainsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListDomainsResult::ListDomainsResult()
{
}

ListDomainsResult::ListDomainsResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListDomainsResult& ListDomainsResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "ListDomainsResult")
  {
    resultNode = rootNode.FirstChild("ListDomainsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode domainNamesNode = resultNode.FirstChild("DomainName");
    if(!domainNamesNode.IsNull())
    {
      XmlNode domainNameMember = domainNamesNode;
      while(!domainNameMember.IsNull())
      {
        m_domainNames.push_back(StringUtils::Trim(domainNameMember.GetText().c_str()));
        domainNameMember = domainNameMember.NextNode("DomainName");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = StringUtils::Trim(nextTokenNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}