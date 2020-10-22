(function($) {
    $.fn.highlight = function(backcolor,forecolor) {
		return this.each(function() {
			$(this).css({
						'font-weight': 'bold', 
						'color': forecolor, 
						'background-color': backcolor
			});
		});
	}
})(jQuery);


