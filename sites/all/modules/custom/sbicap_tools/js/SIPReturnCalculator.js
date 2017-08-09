(function($) {
  Drupal.behaviors.SIPReturnCalculator = {
    attach: function (context, settings) {
      /*$(document).on({
        mouseover: function () {
          $(this).parent().next().css("display", "block");
        },
        mouseout: function () {
          $(this).parent().next().css("display", "none");
        }
      }, "a.help-item");*/
    }
  };
})(jQuery);

function Comma(number) {
  number = '' + number;
  if (number.length > 3) {
    var mod = number.length % 3;
    var output = (mod > 0 ? (number.substring(0, mod)) : '');
    for (i = 0; i < Math.floor(number.length / 3); i++) {
      if ((mod == 0) && (i == 0))
        output += number.substring(mod + 3 * i, mod + 3 * i + 3);
      else
        output += ',' + number.substring(mod + 3 * i, mod + 3 * i + 3);
      }
      return (output);
  }
  else return number;
}

function ChangeTab(id) {
  for (i = 1; i <= 2; i++) {
    if (i == id) {
      document.getElementById('td' + i).className = "BodyHead_txt TabSelect";
      document.getElementById('Tab' + i).style.display = "inline";
    }
    else {
      document.getElementById('td' + i).className = "White_txt TabUnSelect Pointer";
      document.getElementById('Tab' + i).style.display = "none";
    }
  }
}

function calculatem() {
  var ans, amt, year, returns;
  if (document.getElementById("years").value == "" || document.getElementById("years").value == "Select Years") {
    alert('Please Select Years');
    document.getElementById("years").focus();
    return false;
  }
  else if (document.getElementById("returns").value == "" || document.getElementById("returns").value == "Select Returns") {
    alert('Please Select Returns');
    document.getElementById("returns").focus();
    return false;
  }
  else if (document.getElementById("amount").value == "" || document.getElementById("amount").value == "Enter Amount") {
    alert('Please Enter Target Amount');
    document.getElementById("amount").focus();
    return false;
  }
  else if (document.getElementById("amount").value == "0") {
    alert('Target Amount should not be zero');
    document.getElementById("amount").focus();
    return false;
  }
  else {
    amt = document.getElementById("amount").value;
    year = (document.getElementById("years").value) * 12;
    returns = ((document.getElementById("returns").value) / 100) / 12;
    ans = (returns / (1 - Math.pow((1 + returns), year))) * (-amt);
    document.getElementById("ans").innerHTML = "<span class='rupee'>Rs</span>&nbsp;" + Comma(Math.round(ans)) + "";
    return false;
  }
}

function isNumberKey(evt) {
  var charCode = (evt.which) ? evt.which : event.keyCode

  if (charCode > 31 && (charCode < 48 || charCode > 57))
    return false;

    return true;
}

function calculateTarget() {
  var ans, i;
  var amt, year, returns;

  if (document.getElementById("tyears").value == "" || document.getElementById("tyears").value == "Select Years") {
    alert('Please Select Years');
    document.getElementById("tyears").focus();
    return false;
  }
  else if (document.getElementById("treturns").value == "" || document.getElementById("treturns").value == "Select Returns") {
    alert('Please Select Returns');
    document.getElementById("treturns").focus();
    return false;
  }
  else if (document.getElementById("tamount").value == "" || document.getElementById("tamount").value == "Select Your Amount") {
    alert('Please Select Your Amount');
    document.getElementById("tamount").focus();
    return true;
  }
  else {
    amt = document.getElementById("tamount").value;
    year = (document.getElementById("tyears").value) * 12;
    returns = ((document.getElementById("treturns").value) / 100) / 12;

    ans = amt * (((Math.pow((1 + returns), year) - 1)) / returns);
    document.getElementById("tans").innerHTML = "<span class='rupee'>Rs</span>&nbsp;" + Comma(Math.round(ans)) + "";
    return false;
  }
}

function reset1() {
  //window.location="/tools/sip-return-calculator";
  document.getElementById("years").value = "Select Years";
  document.getElementById("returns").value = "Select Returns";
  document.getElementById("amount").value = "";
  document.getElementById("ans").innerHTML = "";
}

function reset2() {
  //window.location="/tools/sip-return-calculator";
  document.getElementById("tyears").value = "Select Years";
  document.getElementById("treturns").value = "Select Returns";
  document.getElementById("tamount").value = "Select Your Amount";
  document.getElementById("tans").innerHTML = "";
}

(function(){
  var config = {
    '.chosen-select' : {},
    '.chosen-select-deselect'  : {allow_single_deselect:true},
    '.chosen-select-no-single' : {disable_search_threshold:10},
    '.chosen-select-no-results': {no_results_text:'Oops, nothing found!'},
    '.chosen-select-width' : {width:"95%"}
  }

  for (var selector in config) {
    $(selector).chosen(config[selector]);
  }
})
