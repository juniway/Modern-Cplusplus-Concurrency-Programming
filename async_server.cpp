#include <boost/asio.hpp>
#include <iostream>

using boost::asio;
typedef boost::shared_ptr<ip::tcp::socket> socket_ptr;
io_service service;
ip::tcp::endpoint ep(ip::tcp::v4(), 2001); // listen on 2001
ip::tcp::acceptor acc(service, ep);
socket_ptr sock(new ip::tcp::socket(service));
acc.async_accept(*sock, boost::bind(handle_accept, sock, _1);
service.run();
void handle_accept(socket_ptr sock, const boost::system::error_code &err){
	if(err) return;
	// starting from here, you can do i/o on this socket
	socket_ptr sock(new ip::tcp::socket(service);
	acc.async_accept(*sock, const boost::system::error_code &err);
}


// throw an exception
try{
    sock.connect(ep);
}catch(boost::system::system_error err){
    std::cout << e.code() << std::endl;
}
// return an error code
boost::system::error_code err;
sock.connect(ep, err);
if(err) std::cout << err << std::endl;


char data[512], boost::system::error_code error;
size_t len = sock.read_some(buffer(data), error);
if(error == error::eof) return; // connection closed
 
