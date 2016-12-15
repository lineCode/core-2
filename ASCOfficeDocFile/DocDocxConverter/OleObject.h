﻿/*
 * (c) Copyright Ascensio System SIA 2010-2016
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at Lubanas st. 125a-25, Riga, Latvia,
 * EU, LV-1021.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#pragma once

#include "IVisitable.h"
#include "StructuredStorageReader.h"
#include "PictureDescriptor.h"

namespace DocFileFormat
{
	class OleObject: public IVisitable
	{
		friend class OleObjectMapping;  
  
	public:
		enum LinkUpdateOption
		{
			NoLink = 0,
			Always = 1,
			OnCall = 3
		};	
		bool				bOlderVersion;				
		bool				bLinked;		// The the value is true, the object is a linked object
		
		std::wstring		ObjectId;
		std::wstring		ClassId;

		std::wstring		UserType;		// Display name of the linked object or embedded object.
		std::wstring		ClipboardFormat;
		std::wstring		Link;
		std::wstring		Program;
		LinkUpdateOption	updateMode;
		std::wstring		UpdateMode;

		bool				isEquation;
		bool				isEmbedded;
		
		std::string			emeddedData;
		
		PictureDescriptor	pictureDesciptor;

		OleObject( const CharacterPropertyExceptions* chpx, StructuredStorageReader* docStorage, bool bOlderVersion_ );
		virtual ~OleObject() {}

	private:
		POLE::Storage	*oleStorage;
	  
		void processLinkInfoStream		( const std::string& linkStream );      
		void processEquationNativeStream( const std::string& eqStream );
		void processPICStream			( const std::string& picStream );
		void processCompObjStream		( const std::string& compStream );
		void processOleStream			( const std::string& oleStreamName );

		std::wstring getOleEntryName	( const CharacterPropertyExceptions* chpx );
};
}
