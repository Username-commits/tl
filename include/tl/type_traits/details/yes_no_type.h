#ifndef _TL_DETAILS_YES_NO_TYPE_H_INCLUDED_
#define _TL_DETAILS_YES_NO_TYPE_H_INCLUDED_

namespace tl{
namespace tl_details{
    
    using yes_type = char;
    struct no_type
    {
        char buffer[4];
    };
}
}

#endif//_TL_DETAILS_YES_NO_TYPE_H_INCLUDED_
