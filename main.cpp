#include <log4cxx/logger.h>
#include <log4cxx/basicconfigurator.h>

int main(){
    log4cxx::BasicConfigurator::configure();

    LOG4CXX_INFO(log4cxx::Logger::getRootLogger(), "Log info");

    return 0;
}
