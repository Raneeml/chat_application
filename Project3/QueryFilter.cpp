#include "pch.h"
#include "QueryFilter.h"

namespace DBRepository {
    
    

    QueryFilter::Column^ QueryFilter::whereColumn(String^ columnName)
    {
        query += columnName->ToLower();
        return gcnew Column(this);
    }



    
    QueryFilter::FilterResult^ QueryFilter::Column::isNull()
    {
        fi->query += " IS NULL";
        return gcnew FilterResult(this);
    }

    QueryFilter::FilterResult^ QueryFilter::Column::isNotNull()
    {
        fi->query += " IS NOT NULL";
        return gcnew FilterResult(this);
    }

    QueryFilter::FilterResult^ QueryFilter::Column::isEqualTo(Object^ value)
    {
        Type^ dataType = value->GetType();
        if (dataType->Name == "String") {
            value = "'" + value + "'";
        }
        else if (dataType->Name == "Boolean") {
            value = value->Equals(true) ? "1" : "0";
        }

        fi->query += " = " + value;
        return gcnew FilterResult(this);
    }

    QueryFilter::FilterResult^ QueryFilter::Column::isGreaterThan(Object^ value)
    {
        fi->query += " > " + value;
        return gcnew FilterResult(this);
    }

    QueryFilter::FilterResult^ QueryFilter::Column::isGreaterThanOrEqual(Object^ value)
    {
        fi->query += " >= " + value;
        return gcnew FilterResult(this);
    }

    QueryFilter::FilterResult^ QueryFilter::Column::isSmallerThan(Object^ value)
    {
        fi->query += " < " + value;
        return gcnew FilterResult(this);
    }

    QueryFilter::FilterResult^ QueryFilter::Column::isSmallerThanOrEqual(Object^ value)
    {
        fi->query += " <= " + value;
        return gcnew FilterResult(this);
    }




    QueryFilter^ QueryFilter::FilterResult::and ()
    {
        ci->fi->query += " AND ";
        return ci->fi;
    }

    QueryFilter^ QueryFilter::FilterResult:: or ()
    {
        ci->fi->query += " OR ";
        return ci->fi;
    }

    QueryFilter^ QueryFilter::FilterResult::build()
    {
        return ci->fi;
    }

}
