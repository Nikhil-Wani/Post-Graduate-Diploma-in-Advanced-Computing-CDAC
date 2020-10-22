/* Closures - Create private functions*/
(function($) {
	function test(argument)
	{
		alert(argument);
	}
	jQuery.closurePlugin = function(message) {
		test(message);
	};
})(jQuery);


