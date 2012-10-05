// 
//  Copyright 2012 MultiMC Contributors
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//

#pragma once
#include "task.h"

#include <wx/string.h>
#include <wx/stream.h>
#include <wx/zipstrm.h>

class ZipTask : public Task
{
public:
	ZipTask(wxOutputStream *out, const wxString &path);
	
	virtual ExitCode TaskStart();
	
protected:
	wxString m_path;
	wxOutputStream *m_out;

	bool DiscoverFiles(const wxString &path, wxArrayString &fileList);
};