<?php
$keyword = $_GET['keyword'];
if ($keyword =='phylomatic'){
    echo '{"service":"phylomatic","wsdl":"http://128.123.177.13/WSRegistry/sites/default/files/wsdl/wsdl_2_restHTTP_Phylomatic.wsdl"}';
} elseif ($keyword == 'tnrs') {
	echo '{"service":"tnrs","wsdl":"http://128.123.177.13/WSRegistry/sites/default/files/wsdl/wsdl_2_restHTTP_TNRS_Services.wsdl"}';
} else{
    echo '{"service":"phylomatic","wsdl":"http://128.123.177.13/WSRegistry/sites/default/files/wsdl/wsdl_2_restHTTP_Phylomatic.wsdl"}';
	echo "\n";
    echo '{"service":"tnrs","wsdl":"http://128.123.177.13/WSRegistry/sites/default/files/wsdl/wsdl_2_restHTTP_TNRS_Services.wsdl"}';
    echo "\n";
	echo '{"service":"tnrs","wsdl":"http://128.123.177.13/WSRegistry/sites/default/files/wsdl/wsdl_2_restHTTP_OpenTree.wsdl"}';
}
?>