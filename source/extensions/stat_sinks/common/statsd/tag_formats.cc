#include "extensions/stat_sinks/common/statsd/tag_formats.h"

namespace Envoy {
namespace Extensions {
namespace StatSinks {
namespace Common {
namespace Statsd {

const TagFormat& getDefaultTagFormat() {
  do {
    static const TagFormat* objectptr = new TagFormat{
      "|#",                       // start
      ":",                        // assign
      ",",                        // separator
      TagPosition::TagAfterValue, // tag_position
    };
    return *objectptr;
  } while (0);
}

const TagFormat& getGraphiteTagFormat() {
  do {
    static const TagFormat* objectptr = new TagFormat{
      ";",                       // start
      "=",                       // assign
      ";",                       // separator
      TagPosition::TagAfterName, // tag_position
    };
    return *objectptr;
  } while (0);
}

} // namespace Statsd
} // namespace Common
} // namespace StatSinks
} // namespace Extensions
} // namespace Envoy
