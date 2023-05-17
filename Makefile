main:
	g++ src/inspection.cpp src/lib/argparse.h src/lib/risk.h src/lib/system.h src/lib/prompt.hpp src/lib/banner.h src/lib/http/check_conn.hpp src/lib/menu.h -o inspection -lcurl;
