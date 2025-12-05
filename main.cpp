#include "httplib.h"
 
int main() {
    const char* HOST = "0.0.0.0";
    const int PORT = 8080;

    httplib::Server svr;

    svr.Get("/", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Hello World", "text/plain");
    });

    std::cout << "Application started successfully on " << HOST << ":" << PORT << std::endl;

    svr.listen(HOST, PORT);

    return 0;
}


