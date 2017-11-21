(function ($) {

    Drupal.behaviors.gsb_feature_faculty_ct = {

        attach: function (context, settings) {

            var blogUrlLabel = 'edit-field-link-blog-und-0'
            $('label[for="' + blogUrlLabel + '"]').html('');

            $('input').each(function() {

                if (this.id == 'edit-field-link-blog-und-0-title') {
                    $('label[for="' + this.id + '"]').html('Blog Name <span class="form-required">*</span>');
                }
            });

            // show/hide Blog URL edit fields

            if ($('#edit-field-has-blog-und').is(':checked')) {
                $("#edit-field-link-blog").show();
            }
            else {
                $("#edit-field-link-blog").hide();
            }

            $('#edit-field-has-blog-und').on('change',function() {
                if ($('#edit-field-has-blog-und').is(':checked')) {
                    $("#edit-field-link-blog").show();
                }
                else {
                    $("#edit-field-link-blog").hide();
                }
            });

            // show/hide Twitter Handle edit field

            if ($('#edit-field-has-twitter-handle-und').is(':checked')) {
                $("#edit-field-twitter-handle").show();
            }
            else {
                $("#edit-field-twitter-handle").hide();
            }

            $("#edit-field-link-twitter").hide();

            $('#edit-field-has-twitter-handle-und').on('change',function() {
                if ($('#edit-field-has-twitter-handle-und').is(':checked')) {
                    $("#edit-field-twitter-handle").show();
                }
                else {
                    $("#edit-field-twitter-handle").hide();
                }
            });

        } // end attach

    }

    Drupal.gsb_feature_faculty_ct = Drupal.gsb_feature_faculty_ct || {}

})(jQuery);
