#ifndef D_VersionList_H
#define D_VersionList_H

///////////////////////////////////////////////////////////////////////////////
//
//  VersionList is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdexcept>
#include <list>

#define _VERSION_LIST_HEADER_VERSION_STRING_ "$Id$"

class VersionList {
 public:
  virtual ~VersionList ();

  static VersionList& getInstance () {
    static VersionList        _versionList;
    return _versionList;
  }

  static const std::string&   getHeaderVersionString () {
    return _headerVersionString;
  }

  static const std::string&   getSourceVersionString () {
    return _sourceVersionString;
  }

  void add (const std::string& versionString) {
    _versions.push_back (versionString);
  }

  friend std::ostream& operator<< (std::ostream& os, const VersionList& versionList) {
    ListOfVersions::const_iterator     it = versionList._versions.begin ();
    while (it != versionList._versions.end ()) {
      os << *it << std::endl;
      ++it;
    }
    return os;
  }

 private:
  typedef std::list<std::string> ListOfVersions;

  explicit VersionList ();
  VersionList (const VersionList&);
  VersionList& operator= (const VersionList&);

  static bool                   addSelfVersions ();

  static const std::string      _headerVersionString;
  static const std::string      _sourceVersionString;
  ListOfVersions                _versions;
  static bool                   _versionsAdded;
};

#endif  // D_VersionList_H
