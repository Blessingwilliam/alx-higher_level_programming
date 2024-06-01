$(document).ready(function () {
  function fetchTranslation() {
    let languageCode = $('#language_code').val();
    let apiUrl = 'https://www.fourtonfish.com/hellosalut/hello/?lang=' + languageCode;

    $.get(apiUrl, function (data) {
      $('#hello').text(data.hello);
    });
  }

  $('#btn_translate').click(fetchTranslation);

  $('#language_code').keypress(function (e) {
    if (e.keyCode === 13) {
      fetchTranslation();
    }
  });
});
