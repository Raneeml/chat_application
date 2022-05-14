#pragma once

using namespace System;

namespace DBRepository {
	

	ref class QueryFilter {
	protected:
		String^ query;

		QueryFilter(String^ lastQuery) {
			query = lastQuery;
		}

	public:
		QueryFilter() {
			query = " WHERE ";
		}

		String^ wcond() { return query; };

		ref class Column;
		ref class FilterResult;


		Column^ whereColumn(String^ columnName);

		

		ref class Column {

		public:
			QueryFilter^ fi;

			Column(QueryFilter^ filter) {
				fi = filter;
			}


			FilterResult^ isNull();

			FilterResult^ isNotNull();

			FilterResult^ isEqualTo(Object^ value);

			FilterResult^ isGreaterThan(Object^ value);

			FilterResult^ isGreaterThanOrEqual(Object^ value);

			FilterResult^ isSmallerThan(Object^ value);

			FilterResult^ isSmallerThanOrEqual(Object^ value);
			
		};



		ref class FilterResult {

		public:
			Column^ ci;

			FilterResult(Column^ colInst) {
				ci = colInst;
			}

			QueryFilter^and ();

			QueryFilter^or ();

			QueryFilter^ build();
		};


	};
}
